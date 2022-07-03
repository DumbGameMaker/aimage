//
//  download.swift
//  aimage
//
//  Created by Base64== on 7/2/22.
//

import Foundation
import CryptoKit

func download_clip(){
  
    guard let CLIP_URL = URL(string: "https://openaipublic.azureedge.net/clip/models/40d365715913c9da98579312b702a82c18be219cc2a73407c4526f58eba950af/ViT-B-32.pt") else { return }

    let clipDownloadTask = URLSession.shared.downloadTask(with: CLIP_URL) { urlOrNil, responseOrNil, errorOrNil in
    
    guard let fileURL = urlOrNil else {return}
    do {
      let documentsURL = try
      FileManager.default.url(for: .documentDirectory, in: .userDomainMask, appropriateFor: nil, create: false)
      let savedURL = documentsURL.appendingPathComponent(fileURL.lastPathComponent)
      try FileManager.default.moveItem(at: fileURL, to: savedURL)
        UserDefaults.setValue(savedURL, forKey: "Clip")
        UserDefaults.setValue("40d365715913c9da98579312b702a82c18be219cc2a73407c4526f58eba950af", forKey: "Clip_Checksum") // TODO: Check this SHA256 checksum to make sure corruption or tampering didn't happen.
    }
    catch {
      print ("error happened no further comment")
    }
  }
  
  clipDownloadTask.resume()
}
